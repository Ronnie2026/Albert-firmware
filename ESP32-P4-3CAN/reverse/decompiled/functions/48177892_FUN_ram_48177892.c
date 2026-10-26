/* Firmware entry: 0x48177892 */

undefined4
FUN_ram_48177892(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,uint param_6,uint *param_7,undefined4 param_8,undefined4 param_9)

{
  uint uVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar1 = FUN_ram_481791c4(uVar2);
  *param_7 = uVar1;
  if (uVar1 <= param_6) {
    uVar2 = FUN_ram_4817a624(uVar2,param_8,param_9,param_2,param_4,param_3,param_5);
    return uVar2;
  }
  return 0xffffc780;
}


