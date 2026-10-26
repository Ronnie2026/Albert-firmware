/* Firmware entry: 0x4809660e */

uint FUN_ram_4809660e(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 local_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined1 uStack_84;
  undefined1 uStack_83;
  byte abStack_82 [2];
  int iStack_80;
  undefined1 auStack_7c [104];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (mhartid == 1) {
    if (param_3 == 1) {
      uVar2 = FUN_ram_48095f0a(param_1,param_2,param_4);
      return uVar2;
    }
    if (param_3 == 2) {
      uVar2 = FUN_ram_48094d0c();
      return uVar2;
    }
    if (param_3 == 0) {
      uVar2 = FUN_ram_480952dc(param_1,param_2,param_4);
      return uVar2;
    }
  }
  memset(abStack_82,0,0x62);
  uStack_84 = (undefined1)param_3;
  uStack_83 = (undefined1)param_4;
  uStack_8c = param_1;
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
    iVar1 = FUN_ram_4ff3e458(&LAB_ram_48096c50,pcVar3,0x2000,&uStack_8c,4,&local_90,1);
    if (iVar1 == 1) {
      FUN_ram_4ff3b5f0(iStack_80,0xffffffff);
      return (uint)abStack_82[0];
    }
  }
  return 0;
}


