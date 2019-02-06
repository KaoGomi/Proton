#ifdef __cplusplus
extern "C" {
#endif
extern void cppISteamGameServer_SteamGameServer003_LogOn(void *);
extern void cppISteamGameServer_SteamGameServer003_LogOff(void *);
extern bool cppISteamGameServer_SteamGameServer003_BLoggedOn(void *);
extern bool cppISteamGameServer_SteamGameServer003_BSecure(void *);
extern CSteamID cppISteamGameServer_SteamGameServer003_GetSteamID(void *);
extern bool cppISteamGameServer_SteamGameServer003_GSGetSteam2GetEncryptionKeyToSendToNewClient(void *, void *, uint32 *, uint32);
extern bool cppISteamGameServer_SteamGameServer003_GSSendUserConnect(void *, uint32, uint32, uint16, const void *, uint32);
extern bool cppISteamGameServer_SteamGameServer003_GSRemoveUserConnect(void *, uint32);
extern bool cppISteamGameServer_SteamGameServer003_GSSendUserDisconnect(void *, CSteamID, uint32);
extern void cppISteamGameServer_SteamGameServer003_GSSetSpawnCount(void *, uint32);
extern bool cppISteamGameServer_SteamGameServer003_GSSetServerType(void *, int32, uint32, uint32, uint16, uint16, uint16, const char *, const char *, bool);
extern bool cppISteamGameServer_SteamGameServer003_GSUpdateStatus(void *, int, int, int, const char *, const char *, const char *);
extern bool cppISteamGameServer_SteamGameServer003_GSCreateUnauthenticatedUser(void *, CSteamID *);
extern bool cppISteamGameServer_SteamGameServer003_GSSetUserData(void *, CSteamID, const char *, uint32);
extern void cppISteamGameServer_SteamGameServer003_GSUpdateSpectatorPort(void *, uint16);
extern void cppISteamGameServer_SteamGameServer003_GSSetGameType(void *, const char *);
extern bool cppISteamGameServer_SteamGameServer003_GSGetUserAchievementStatus(void *, CSteamID, const char *);
#ifdef __cplusplus
}
#endif
