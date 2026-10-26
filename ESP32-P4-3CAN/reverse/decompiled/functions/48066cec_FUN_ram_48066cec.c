/* Firmware entry: 0x48066cec */

void FUN_ram_48066cec(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_34;
  char *pcStack_30;
  int aiStack_2c [5];
  
  iVar2 = DAT_ram_4ff5cbe8;
  iVar4 = DAT_ram_4ff5cbdc;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcStack_30 = "{\"ok\":false,\"error\":\"vehicle_not_parked\"}";
  uStack_34 = 0x199;
  cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  aiStack_2c[0] = 0x29;
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    iVar3 = 0x29;
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_34,&pcStack_30,aiStack_2c);
      DAT_ram_4ff5cbc8 = '\0';
      iVar3 = aiStack_2c[0];
      if (aiStack_2c[0] == 0) {
        iVar3 = 1;
      }
    }
    iVar3 = FUN_ram_4ff206d8(iVar3,0x404);
    iVar5 = iVar2 + iVar4 * 0x1d40;
    *(int *)(iVar5 + 0x1cdc) = iVar3;
    if (iVar3 == 0) {
      if (*(char *)(iVar5 + 0x44c) == '\0') {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      FUN_ram_48065e9c(iVar2 + iVar4 * 0x1d40 + 0x1c,7);
    }
    else {
      if (aiStack_2c[0] != 0) {
        FUN_ram_4ff45158(iVar3,pcStack_30,aiStack_2c[0]);
        iVar3 = *(int *)(iVar5 + 0x1cdc);
      }
      iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(iVar4 + 0x44c) == '\0') || (*(char *)(iVar4 + 0x44c) == '\x06')) {
        return;
      }
      *(int *)(iVar4 + 0x1ce0) = iVar3;
      *(int *)(iVar4 + 0x1ce4) = aiStack_2c[0];
      *(undefined4 *)(iVar4 + 0x1ce8) = 0;
      FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_34,"application/json",iVar4,&LAB_ram_4802d3f2);
    }
  }
  return;
}


