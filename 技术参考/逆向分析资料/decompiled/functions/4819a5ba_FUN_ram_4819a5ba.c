/* Firmware entry: 0x4819a5ba */

undefined4 FUN_ram_4819a5ba(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x28) == 0)) {
    FUN_ram_4819a44c();
  }
  if (((*(uint *)(param_3 + 100) & 1) == 0) && ((*(ushort *)(param_3 + 0xc) & 0x200) == 0)) {
    FUN_ram_4ff21846(*(undefined4 *)(param_3 + 0x58));
  }
  uVar1 = FUN_ram_4819aad2(param_1,param_2,param_3);
  if (((*(uint *)(param_3 + 100) & 1) == 0) && ((*(ushort *)(param_3 + 0xc) & 0x200) == 0)) {
    FUN_ram_4ff21966(*(undefined4 *)(param_3 + 0x58));
  }
  return uVar1;
}


