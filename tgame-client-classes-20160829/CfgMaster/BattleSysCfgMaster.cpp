#include "BattleSysCfgMaster.h"

#include <set>

using std::set;

int CBattleSysCfgMaster::ValidateCfg()const
{
    int iRet = 0;


    set<unsigned int> stItemIDSet;

    for(int iIdx = 0; iIdx < m_stCfg.battlecfg_size(); iIdx++)
    {
        unsigned int uiCfgID = m_stCfg.battlecfg(iIdx).cfgid();
        if(stItemIDSet.insert(uiCfgID).second == false)
        {
            CV_ERROR(("%s, cfgid = %u is dup cfg id !",
                __PRETTY_FUNCTION__, uiCfgID));
            return -1;//id重复
        }

        //to add other validate check, such as skill etc.
    }
    return iRet;
}

int CBattleSysCfgMaster::SetCfg()
{
    int iRet = 0;

    for(int iIdx = 0; iIdx < m_stCfg.battlecfg_size(); iIdx++)
    {
        unsigned int uiCfgID = m_stCfg.battlecfg(iIdx).cfgid();
        if(m_stID2IDX.insert(make_pair(uiCfgID, iIdx)).second == false)
        {
            CV_ERROR(("%s, cfgid = %u is dup cfg id !",
                __PRETTY_FUNCTION__, uiCfgID));
            return -1;//id重复
        }
    }

    return iRet;
}

BattleSysCfg* CBattleSysCfgMaster::GetBattleCfgByID(const unsigned int uiCfgID)
{
    map<unsigned int, int>::const_iterator it = m_stID2IDX.find(uiCfgID);

    if(it == m_stID2IDX.end())
    {
        CV_ERROR(("%s, can not find cfgid = %u item", __PRETTY_FUNCTION__, uiCfgID));
        return NULL; //找不到该物品配置
    }

    return m_stCfg.mutable_battlecfg(it->second);
}
