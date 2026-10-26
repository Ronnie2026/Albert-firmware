/* Firmware entry: 0x48188b9e */

undefined4 FUN_ram_48188b9e(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = 0;
  if ((*(uint *)(param_1 + 0x158) & 4) != 0) {
    if (((param_2 & 0xffff7ffe) == (*(uint *)(param_1 + 0x164) & param_2 & 0xffff7ffe)) &&
       ((~param_2 & *(uint *)(param_1 + 0x164) & 0x8001) == 0)) {
      return 0;
    }
    uVar1 = 0xffffd800;
  }
  return uVar1;
}


