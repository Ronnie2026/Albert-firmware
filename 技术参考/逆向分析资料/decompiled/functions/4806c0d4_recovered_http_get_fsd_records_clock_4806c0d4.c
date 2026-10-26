/* Firmware entry: 0x4806c0d4 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_fsd_records_clock_4806c0d4(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_48;
  char *pcStack_44;
  int aiStack_40 [4];
  int iStack_30;
  undefined1 *puStack_2c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(aiStack_40,"Cache-Control");
  FUN_ram_4802a8a8(&iStack_30,"no-store");
  FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,aiStack_40,&iStack_30);
  FUN_ram_4802a59e(&iStack_30);
  FUN_ram_4802a59e(aiStack_40);
  iVar3 = DAT_ram_4ff5cbe8;
  iVar2 = DAT_ram_4ff5cbdc;
  if (DAT_ram_4ff6dcd5 != '\0') {
    FUN_ram_4806b32e();
    return;
  }
  pcStack_44 = "{\"ok\":false,\"error\":\"records_unavailable\"}";
  uStack_48 = 0x1f7;
  aiStack_40[0] = 0x2a;
  cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    iVar4 = 0x2a;
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_48,&pcStack_44,aiStack_40);
      DAT_ram_4ff5cbc8 = '\0';
      iVar4 = aiStack_40[0];
      if (aiStack_40[0] == 0) {
        iVar4 = 1;
      }
    }
    iVar4 = FUN_ram_4ff206d8(iVar4,0x404);
    iVar5 = iVar3 + iVar2 * 0x1d40;
    *(int *)(iVar5 + 0x1cdc) = iVar4;
    if (iVar4 == 0) {
      if (*(char *)(iVar5 + 0x44c) == '\0') {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      FUN_ram_48065e9c(iVar3 + iVar2 * 0x1d40 + 0x1c,7);
    }
    else {
      if (aiStack_40[0] != 0) {
        FUN_ram_4ff45158(iVar4,pcStack_44,aiStack_40[0]);
        iVar4 = *(int *)(iVar5 + 0x1cdc);
      }
      iStack_30 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(iStack_30 + 0x44c) == '\0') || (*(char *)(iStack_30 + 0x44c) == '\x06')) {
        return;
      }
      *(int *)(iStack_30 + 0x1ce0) = iVar4;
      *(int *)(iStack_30 + 0x1ce4) = aiStack_40[0];
      *(undefined4 *)(iStack_30 + 0x1ce8) = 0;
      puStack_2c = &LAB_ram_4802d3f2;
      FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_48,"application/json",iStack_30,&LAB_ram_4802d3f2);
    }
  }
  return;
}


