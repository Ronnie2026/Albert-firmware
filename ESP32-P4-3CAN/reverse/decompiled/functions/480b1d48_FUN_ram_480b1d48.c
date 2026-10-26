/* Firmware entry: 0x480b1d48 */

/* WARNING: Removing unreachable block (ram,0x480b1f70) */

char * FUN_ram_480b1d48(void)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  char *pcVar8;
  longlong lVar9;
  
  pcVar3 = DAT_ram_4ff6dcc8;
  iVar2 = DAT_ram_4ff6dc9c;
  iVar7 = DAT_ram_4ff6dc94;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((DAT_ram_4ff6dc9c != 0) && (DAT_ram_4ff6dc94 != 0)) &&
      (*(char *)(DAT_ram_4ff6dc94 + 0x1e931) != '\0')) && (DAT_ram_4ff6dcc8 != (char *)0x0)) {
    if (*(char *)(DAT_ram_4ff6dc94 + 0x11a40) == '\0') {
      if ((*(char *)(DAT_ram_4ff6dc94 + 0x11b1f) != '\0') ||
         ((*(char *)(DAT_ram_4ff6dc94 + 0x12688) != '\0' &&
          (iVar4 = FUN_ram_4ff453ae(DAT_ram_4ff6dc94 + 0x12688,"applied"), iVar4 != 0))))
      goto LAB_ram_480b1eb6;
    }
    else {
      if (*(char *)(DAT_ram_4ff6dc94 + 0x11a40) != '\x06') {
        return "restoring";
      }
      if ((((*(char *)(DAT_ram_4ff6dc94 + 0x11b1f) != '\0') ||
           ((*(char *)(DAT_ram_4ff6dc94 + 0x12688) != '\0' &&
            (iVar4 = FUN_ram_4ff453ae(DAT_ram_4ff6dc94 + 0x12688,"applied"), iVar4 != 0)))) ||
          (*(char *)(iVar7 + 0x11a42) != *(char *)(iVar7 + 0x11a41))) ||
         (*(char *)(iVar7 + 0x11a42) == '\0')) {
LAB_ram_480b1eb6:
        return "failed";
      }
    }
    if (*(char *)(iVar2 + 0x87b63) != '\0') {
      return "restore_pending";
    }
    iVar4 = FUN_ram_4802c48c();
    if (iVar4 != 0) {
      return "conflict";
    }
    if (DAT_ram_4ff5bd64._1_1_ != '\0') {
      return "failed";
    }
    if ((char)DAT_ram_4ff5bd64 != '\0') {
      return "failed";
    }
    pcVar8 = *(char **)(iVar2 + 0x87bc0);
    iVar4 = FUN_ram_4ff453ae(pcVar8,"server_not_adapted");
    if (iVar4 == 0) {
      return "unsupported";
    }
    if ((*pcVar8 != '\0') || (iVar4 = FUN_ram_48032dec(), iVar4 == 0)) {
      return "failed";
    }
    if ((((*(char *)(iVar2 + 0x87b60) != '\0') && (*pcVar3 != '\0')) && (pcVar3[0x181] != '\0')) &&
       (lVar9 = FUN_ram_4819b728(0), 0x6592007f < lVar9)) {
      if (DAT_ram_4ff6dcc8[0x28a] == '\0') {
        return "disabled";
      }
      iVar4 = thunk_FUN_ram_48124e22(&DAT_ram_4ff6c118);
      if (iVar4 != 3) {
        return "offline";
      }
      fence();
      fence();
      bVar1 = false;
      if (*(char *)(iVar2 + 0x87b5d) != '\0') {
        bVar1 = *(char *)(iVar2 + 0x87b5c) != '\0' && *(char *)(iVar2 + 0x87b5c) != '\a';
      }
      if ((((*(char *)(iVar2 + 0x87b62) != '\0') && (*(char *)(iVar7 + 0x9618) == '\0')) &&
          ((*(char *)(iVar7 + 0x116b8) == '\0' &&
           ((*(char *)(iVar7 + 0x11a40) == '\0' && (*(char *)(iVar7 + 72000) == '\0')))))) &&
         (*(char *)(iVar7 + 0x119c8) == '\0')) {
        iVar7 = 0;
        bVar6 = 0;
        if (!bVar1) {
          do {
            pbVar5 = (byte *)((int)&DAT_ram_4ff5bd30 + iVar7);
            iVar7 = iVar7 + 1;
            bVar6 = bVar6 | *pbVar5;
          } while (iVar7 != 0x10);
          if ((((bVar6 != 0) && (DAT_ram_4ff5bd40 != 0)) && (DAT_ram_4ff5bd40 == DAT_ram_4ff5bd54))
             && (((iVar7 = FUN_ram_4ff4511a(&DAT_ram_4ff5bd30,&DAT_ram_4ff5bd44,0x10), iVar7 == 0 &&
                  (DAT_ram_4ff5bd58 != 0 || DAT_ram_4ff5bd5c != 0)) &&
                 (((char)DAT_ram_4ff5bd64 == '\0' &&
                  ((DAT_ram_4ff5bd64._1_1_ == '\0' && (iVar7 = FUN_ram_480b1b8a(), iVar7 != 0)))))))
             ) {
            return "synced";
          }
        }
      }
      return "syncing";
    }
  }
  return "not_ready";
}


