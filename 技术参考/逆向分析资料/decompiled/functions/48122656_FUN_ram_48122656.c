/* Firmware entry: 0x48122656 */

undefined4 FUN_ram_48122656(undefined4 *param_1,char *param_2)

{
  size_t sVar1;
  int iVar2;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined1 auStack_30 [2];
  undefined1 auStack_2e [2];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 1) == '\0') {
    return 10;
  }
  if ((param_2 != (char *)0x0) && (sVar1 = strlen(param_2), sVar1 < 0x10)) {
    uStack_24 = 0;
    iVar2 = FUN_ram_4815a276(*param_1,param_2,&uStack_32);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = FUN_ram_4815a2d0(*param_1,param_2,&uStack_31);
    if (iVar2 == 0) {
      return 1;
    }
    iVar2 = FUN_ram_4815a32a(*param_1,param_2,auStack_30);
    if (iVar2 == 0) {
      return 2;
    }
    iVar2 = FUN_ram_4815a384(*param_1,param_2,auStack_2e);
    if (iVar2 == 0) {
      return 3;
    }
    iVar2 = FUN_ram_4815a3de(*param_1,param_2,auStack_2c);
    if (iVar2 == 0) {
      return 4;
    }
    iVar2 = FUN_ram_4815a438(*param_1,param_2,auStack_28);
    if (iVar2 == 0) {
      return 5;
    }
    iVar2 = FUN_ram_4815a492(*param_1,param_2,auStack_20);
    if (iVar2 == 0) {
      return 6;
    }
    iVar2 = FUN_ram_4815a4ec(*param_1,param_2,auStack_18);
    if (iVar2 == 0) {
      return 7;
    }
    iVar2 = FUN_ram_4815a546(*param_1,param_2,0,&uStack_24);
    if (iVar2 == 0) {
      return 8;
    }
    iVar2 = FUN_ram_4815a556(*param_1,param_2,0,&uStack_24);
    if (iVar2 == 0) {
      return 9;
    }
  }
  return 10;
}


