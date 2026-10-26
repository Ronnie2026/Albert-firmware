/* Firmware entry: 0x4813114e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4813114e(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (int *)0x0) {
    uVar1 = 0x103;
    if (param_3 != (undefined4 *)0x0) {
      FUN_ram_4800340c(0x30,0,param_2,0,&DAT_ram_4ff6c4c4);
      iVar2 = FUN_ram_4ff311d8(0x1a);
      if (iVar2 == 0) {
        _DAT_ram_500e601c = _DAT_ram_500e601c | 0x200000;
        _DAT_ram_500e60c4 = _DAT_ram_500e60c4 & 0xffffffbf;
        _DAT_ram_500c2048 = _DAT_ram_500c2048 & 0xffffbfff;
      }
      FUN_ram_4ff31206(0x1a,iVar2);
      FUN_ram_4fc001fc(&DAT_ram_4ff6c4bc,1,20000);
      FUN_ram_4fc00208(&DAT_ram_4ff6c4bc);
      FUN_ram_4ff36c30(&DAT_ram_4ff6c4bc,0,*param_1 << 1,1);
      FUN_ram_4ff36c30(&DAT_ram_4ff6c4bc,1,*param_1 << 2,3);
      FUN_ram_4fc0020c(&DAT_ram_4ff6c4bc);
      *param_3 = &DAT_ram_4ff6c4bc;
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0x103;
}


