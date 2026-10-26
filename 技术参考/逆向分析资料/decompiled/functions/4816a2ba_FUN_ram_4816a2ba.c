/* Firmware entry: 0x4816a2ba */

int FUN_ram_4816a2ba(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_2c [24];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_481769e8(auStack_2c);
  uVar1 = FUN_ram_48176d62(param_1);
  iVar2 = FUN_ram_48176b18(auStack_2c,uVar1,0);
  if (((iVar2 == 0) && (iVar2 = FUN_ram_48176aa0(auStack_2c,param_1), iVar2 == 0)) &&
     (iVar2 = FUN_ram_48176caa(auStack_2c,param_2), iVar2 == 0)) {
    FUN_ram_48176d62(param_1);
    uVar1 = FUN_ram_48176d4c();
    *param_3 = uVar1;
  }
  FUN_ram_48176a1a(auStack_2c);
  return iVar2;
}


