/* Firmware entry: 0x481791c8 */

undefined4 FUN_ram_481791c8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48178db6(param_1,0);
  if (iVar1 == 0) {
    uVar2 = FUN_ram_4818006c(param_1 + 8);
    if (0x7f < uVar2) {
      iVar1 = param_1 + 0x10;
      iVar3 = FUN_ram_4817ffaa(iVar1,0);
      if (((iVar3 != 0) && (uVar2 = FUN_ram_4818006c(iVar1), 1 < uVar2)) &&
         (iVar1 = FUN_ram_4818023e(iVar1,param_1 + 8), iVar1 < 0)) {
        return 0;
      }
    }
  }
  return 0xffffbe00;
}


