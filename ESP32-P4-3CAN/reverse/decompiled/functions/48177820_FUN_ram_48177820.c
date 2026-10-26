/* Firmware entry: 0x48177820 */

undefined4
FUN_ram_48177820(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = *(undefined4 *)(param_1 + 4);
  iVar1 = FUN_ram_481791c4(uVar2);
  if (iVar1 == param_3) {
    uVar2 = FUN_ram_4817a4f2(uVar2,param_7,param_8,param_5,param_2,param_4,param_6);
    return uVar2;
  }
  return 0xffffbf80;
}


