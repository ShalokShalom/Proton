#ifdef __cplusplus
extern "C" {
#endif
extern HSteamUser cppISteamUser_SteamUser012_GetHSteamUser(void *);
extern bool cppISteamUser_SteamUser012_BLoggedOn(void *);
extern CSteamID cppISteamUser_SteamUser012_GetSteamID(void *);
extern int cppISteamUser_SteamUser012_InitiateGameConnection(void *, void *, int, CSteamID, uint32, uint16, bool);
extern void cppISteamUser_SteamUser012_TerminateGameConnection(void *, uint32, uint16);
extern void cppISteamUser_SteamUser012_TrackAppUsageEvent(void *, CGameID, int, const char *);
extern bool cppISteamUser_SteamUser012_GetUserDataFolder(void *, char *, int);
extern void cppISteamUser_SteamUser012_StartVoiceRecording(void *);
extern void cppISteamUser_SteamUser012_StopVoiceRecording(void *);
extern EVoiceResult cppISteamUser_SteamUser012_GetCompressedVoice(void *, void *, uint32, uint32 *);
extern EVoiceResult cppISteamUser_SteamUser012_DecompressVoice(void *, void *, uint32, void *, uint32, uint32 *);
extern HAuthTicket cppISteamUser_SteamUser012_GetAuthSessionTicket(void *, void *, int, uint32 *);
extern EBeginAuthSessionResult cppISteamUser_SteamUser012_BeginAuthSession(void *, const void *, int, CSteamID);
extern void cppISteamUser_SteamUser012_EndAuthSession(void *, CSteamID);
extern void cppISteamUser_SteamUser012_CancelAuthTicket(void *, HAuthTicket);
extern EUserHasLicenseForAppResult cppISteamUser_SteamUser012_UserHasLicenseForApp(void *, CSteamID, AppId_t);
#ifdef __cplusplus
}
#endif
