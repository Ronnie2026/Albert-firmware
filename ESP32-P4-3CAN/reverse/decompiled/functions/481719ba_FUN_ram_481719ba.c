/* Firmware entry: 0x481719ba */

undefined4 FUN_ram_481719ba(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_4 < 2) && (*param_1 != 0)) &&
     ((uVar2 = *(uint *)(*param_1 + 4), 1 < (uVar2 >> 0x18 & 3) || ((uVar2 >> 2 & 0x3c0) == param_3)
      ))) {
    param_1[1] = param_3;
    param_1[2] = param_4;
    iVar3 = *(int *)((int)&PTR_DAT_ram_48238f64_ram_48238b48 + (uVar2 >> 0x18 & 0x7c));
    if (param_4 != 1) {
      if (((uVar2 & 0xf000) != 0x3000) && ((uVar2 & 0xe000) != 0x4000)) {
                    /* WARNING: Could not emulate address calculation at 0x48171a06 */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(iVar3 + 0x20))();
        return uVar1;
      }
    }
                    /* WARNING: Could not emulate address calculation at 0x48171a0c */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(iVar3 + 0x1c))(param_1[0xf]);
    return uVar1;
  }
  return 0xffff9f00;
}


