/* Firmware entry: 0x4ff46ad8 */

void FUN_ram_4ff46ad8(undefined4 *param_1)

{
  int iVar1;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_14 = 0;
  uStack_18 = 0x66;
  iVar1 = (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,&uStack_2c);
  if (iVar1 == 0) {
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_14 = 0;
    uStack_18 = 0x99;
    iVar1 = (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,&uStack_2c);
    if (iVar1 == 0) {
      (**(code **)(param_1[1] + 0x54))(param_1,**(undefined4 **)(param_1[1] + 4));
    }
  }
  return;
}


