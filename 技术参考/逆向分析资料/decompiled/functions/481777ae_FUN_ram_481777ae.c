/* Firmware entry: 0x481777ae */

undefined4
FUN_ram_481777ae(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint *param_5,
                uint param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar1 = FUN_ram_481791c4(uVar2);
  *param_5 = uVar1;
  if (uVar1 <= param_6) {
    uVar2 = FUN_ram_4817a044(uVar2,param_7,param_8,param_3,param_2,param_4);
    return uVar2;
  }
  return 0xffffbc00;
}


