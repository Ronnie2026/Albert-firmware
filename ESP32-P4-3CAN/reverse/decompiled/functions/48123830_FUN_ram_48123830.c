/* Firmware entry: 0x48123830 */

void FUN_ram_48123830(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 auStack_c8 [28];
  undefined1 auStack_ac [28];
  undefined1 auStack_90 [28];
  undefined1 auStack_74 [28];
  undefined1 auStack_58 [28];
  undefined1 auStack_3c [32];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4812616c();
  if (iVar1 != 0) {
    FUN_ram_481218da(auStack_c8,param_2);
    FUN_ram_481218da(auStack_ac,param_3);
    FUN_ram_481218da(auStack_90,param_4);
    FUN_ram_481218da(auStack_74,param_5);
    FUN_ram_481218da(auStack_58,param_6);
    FUN_ram_4812181e(auStack_3c,0);
    FUN_ram_48127108(param_1,auStack_c8,auStack_ac,auStack_90,auStack_74,auStack_58,auStack_3c);
  }
  return;
}


