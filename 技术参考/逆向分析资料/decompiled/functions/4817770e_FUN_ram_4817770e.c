/* Firmware entry: 0x4817770e */

undefined4
FUN_ram_4817770e(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = *(undefined4 **)(param_1 + 4);
  iVar2 = (*(code *)puVar1[3])(*puVar1);
  if (iVar2 == param_3) {
                    /* WARNING: Could not recover jumptable at 0x48177752. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)puVar1[1])(*puVar1,param_5,param_2,param_4,param_6,(code *)puVar1[1]);
    return uVar3;
  }
  return 0xffffbf80;
}


