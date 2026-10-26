/* Firmware entry: 0x4809707c */

void FUN_ram_4809707c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined4 local_90;
  int iStack_8c;
  int iStack_88;
  undefined1 uStack_84;
  undefined1 uStack_83;
  char acStack_82 [2];
  int iStack_80;
  undefined1 auStack_7c [92];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar6 = *(int *)(param_1 + 0x17ec0);
  if (iVar6 != 0) {
    FUN_ram_4ff3b5f0(iVar6,0xffffffff);
  }
  iVar1 = param_2 + 0x874;
  FUN_ram_4ff3ec14(iVar1,0xffffffff);
  *(undefined4 *)(param_2 + 0x888) = param_3;
  *(undefined4 *)(param_2 + 0x88c) = param_4;
  if (*(char *)(param_2 + 0x885) != -1) {
    *(char *)(param_2 + 0x885) = *(char *)(param_2 + 0x885) + '\x01';
  }
  FUN_ram_4ff3ee10(iVar1);
  if (mhartid == 1) {
    iVar2 = FUN_ram_48095f0a(param_1,param_2);
    if (iVar2 == 0) goto LAB_ram_48097110;
LAB_ram_48097100:
    fence();
    if ((((*(char *)(param_1 + 0x18c6b) == '\0') || (iVar2 = FUN_ram_4ff2bcc4(), iVar2 != 0)) ||
        (fence(), *(char *)(param_1 + 0x18c6c) != '\0')) ||
       ((*(char *)(param_2 + 0x883) != '\0' ||
        (iVar2 = FUN_ram_4809660e(param_1,param_2,0,1), iVar2 == 0)))) goto LAB_ram_48097110;
    FUN_ram_4ff3ec14(iVar1,0xffffffff);
    *(undefined1 *)(param_2 + 0x885) = 0;
    *(undefined4 *)(param_2 + 0x88c) = 0;
    *(undefined1 *)(param_2 + 0x881) = 0;
    *(undefined2 *)(param_2 + 0x87e) = 0;
    *(undefined4 *)(param_2 + 0x888) = 0;
    *(bool *)(param_2 + 0x2ea8) = *(int *)(param_2 + 0x2c) != 0;
    *(undefined1 *)(param_2 + 0x2eaa) = 0;
    *(undefined1 *)(param_2 + 0x2ea9) = *(undefined1 *)(param_2 + 0x87d);
    *(int *)(param_2 + 0x304c) = *(int *)(param_2 + 0x304c) + 1;
  }
  else {
    memset(acStack_82,0,0x62);
    uStack_84 = 1;
    uStack_83 = 1;
    iStack_8c = param_1;
    iStack_88 = param_2;
    iStack_80 = FUN_ram_4ff3aca6(1,0,0,auStack_7c,3);
    if (iStack_80 != 0) {
      local_90 = 0;
      if (*(char *)(param_2 + 0x14) == '\x01') {
        pcVar3 = "twai0_ctl";
      }
      else {
        pcVar3 = "twai_aux_ctl";
      }
      iVar2 = FUN_ram_4ff3e458(&LAB_ram_48096c50,pcVar3,0x2000,&iStack_8c,4,&local_90,1);
      if ((iVar2 == 1) && (FUN_ram_4ff3b5f0(iStack_80,0xffffffff), acStack_82[0] != '\0'))
      goto LAB_ram_48097100;
    }
LAB_ram_48097110:
    FUN_ram_4ff3ec14(iVar1,0xffffffff);
    *(undefined1 *)(param_2 + 0x87e) = 1;
    cVar4 = *(char *)(param_2 + 0x881);
    *(bool *)(param_2 + 0x2ea8) = *(int *)(param_2 + 0x2c) != 0;
    *(undefined1 *)(param_2 + 0x2eaa) = 1;
    *(undefined1 *)(param_2 + 0x2ea9) = *(undefined1 *)(param_2 + 0x87d);
    if (cVar4 != '\0') goto LAB_ram_48097144;
  }
  cVar4 = *(char *)(param_2 + 0x880);
LAB_ram_48097144:
  *(char *)(param_2 + 0x2eab) = cVar4;
  *(undefined1 *)(param_2 + 0x2eac) = *(undefined1 *)(param_2 + 0x28);
  *(undefined1 *)(param_2 + 0x2ead) = *(undefined1 *)(param_2 + 0x883);
  *(undefined4 *)(param_2 + 0x2eb0) = *(undefined4 *)(param_2 + 0x24);
  bVar5 = false;
  if (*(char *)(param_2 + 0x14) == '\x02') {
    bVar5 = 0x7f < *(ushort *)(param_2 + 0x3088);
  }
  *(bool *)(param_2 + 0x308c) = bVar5;
  FUN_ram_4ff3ee10(iVar1);
  if (iVar6 == 0) {
    return;
  }
  FUN_ram_4ff3afa2(iVar6,0,0,0);
  return;
}


