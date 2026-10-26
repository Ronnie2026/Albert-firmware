/* Firmware entry: 0x4809804c */

uint FUN_ram_4809804c(int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    uVar2 = FUN_ram_48097ba6();
    return uVar2;
  }
  iVar6 = *(int *)(param_1 + 0x17ec0);
  if (iVar6 == 0) {
    bVar1 = *(byte *)(param_1 + 0x18c67);
    if (((bVar1 == 0) || (iVar4 = FUN_ram_4ff2bcc4(), iVar4 != 0)) ||
       (fence(), *(char *)(param_1 + 0x18c6c) != '\0')) {
      return 0;
    }
    fence();
    if (*(char *)(param_1 + 0x18c68) != '\0') {
      return (uint)bVar1;
    }
  }
  else {
    FUN_ram_4ff3b5f0(iVar6,0xffffffff);
    uVar2 = (uint)*(byte *)(param_1 + 0x18c67);
    if (((uVar2 == 0) || (iVar4 = FUN_ram_4ff2bcc4(), iVar4 != 0)) ||
       (fence(), *(char *)(param_1 + 0x18c6c) != '\0')) {
      uVar2 = 0;
      goto LAB_ram_48098082;
    }
    fence();
    if (*(char *)(param_1 + 0x18c68) != '\0') goto LAB_ram_48098082;
  }
  fence();
  *(undefined1 *)(param_1 + 0x18c6b) = 1;
  FUN_ram_48031d74(1);
  fence();
  *(undefined1 *)(param_1 + 0x18c68) = 1;
  iVar4 = param_1 + 0x88c;
  do {
    if (*(char *)(iVar4 + 0xf) == '\0') {
      FUN_ram_4ff3ec14(iVar4,0xffffffff);
      *(undefined4 *)(iVar4 + 0x14) = 0;
      *(undefined4 *)(iVar4 + 0x18) = 0;
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      *(undefined4 *)(iVar4 + 0x20) = 0;
      *(undefined1 *)(iVar4 + 0xd) = 0;
      *(undefined1 *)(iVar4 + 10) = 0;
      *(undefined1 *)(iVar4 + 0xb) = 0;
      *(undefined1 *)(iVar4 + 0xc) = 0;
      *(undefined1 *)(iVar4 + 0x11) = 0;
      *(undefined1 *)(iVar4 + 0x12) = 0;
      FUN_ram_4ff27ffa(iVar4 + -0x874);
      FUN_ram_4ff3ee10(iVar4);
      iVar5 = FUN_ram_4809660e(param_1,iVar4 + -0x874,0,0);
      if (iVar5 == 0) {
        uVar2 = 0;
        goto LAB_ram_480981aa;
      }
    }
    iVar4 = iVar4 + 0x3578;
  } while (param_1 + 0xa8f4 != iVar4);
  pcVar3 = (char *)(param_1 + 0x89b);
  do {
    if ((*pcVar3 == '\0') && (iVar4 = FUN_ram_4809660e(param_1,pcVar3 + -0x883,0,1), iVar4 == 0)) {
      uVar2 = 0;
      break;
    }
    pcVar3 = pcVar3 + 0x3578;
    uVar2 = param_2;
  } while (pcVar3 != (char *)(param_1 + 0xa903));
LAB_ram_480981aa:
  iVar4 = FUN_ram_4ff2bcc4();
  if (((iVar4 == 0) && (fence(), *(char *)(param_1 + 0x18c6c) == '\0')) && (uVar2 != 0)) {
    param_2 = 0;
  }
  else {
    FUN_ram_4809660e(param_1,param_1 + 0x18,1);
    FUN_ram_4809660e(param_1,param_1 + 0x3590,1);
    FUN_ram_4809660e(param_1,param_1 + 0x6b08,1);
    fence();
    *(undefined1 *)(param_1 + 0x18c68) = 0;
    fence();
    *(undefined1 *)(param_1 + 0x18c6b) = 0;
    FUN_ram_48031d74(0);
    uVar2 = 0;
  }
  *(char *)(param_1 + 0x18c6a) = (char)param_2;
  if (iVar6 == 0) {
    return uVar2;
  }
LAB_ram_48098082:
  FUN_ram_4ff3afa2(iVar6,0,0,0);
  return uVar2;
}


