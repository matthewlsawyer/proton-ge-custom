extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive(void *, bool);
extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval(void *, int);
extern bool cppISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket(void *, const void *, int, uint32, uint16);
extern int cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket(void *, void *, int, uint32 *, uint16 *);
extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetBasicServerData(void *, unsigned short, bool, const char *, const char *, unsigned short, bool, const char *);
extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_ClearAllKeyValues(void *);
extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetKeyValue(void *, const char *, const char *);
extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_NotifyShutdown(void *);
extern bool cppISteamMasterServerUpdater_SteamMasterServerUpdater001_WasRestartRequested(void *);
extern void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_ForceHeartbeat(void *);
extern bool cppISteamMasterServerUpdater_SteamMasterServerUpdater001_AddMasterServer(void *, const char *);
extern bool cppISteamMasterServerUpdater_SteamMasterServerUpdater001_RemoveMasterServer(void *, const char *);
extern int cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNumMasterServers(void *);
extern int cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress(void *, int, char *, int);
