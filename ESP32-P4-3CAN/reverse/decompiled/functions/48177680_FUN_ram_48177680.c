/* Firmware entry: 0x48177680 */

undefined4
FUN_ram_48177680(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,uint param_6,uint *param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = *(undefined4 **)(param_1 + 4);
  uVar2 = (*(code *)puVar1[3])(*puVar1);
  *param_7 = uVar2;
  if (uVar2 < 0x401) {
    if (uVar2 <= param_6) {
                    /* WARNING: Could not recover jumptable at 0x481776e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)puVar1[2])
                        (*puVar1,param_8,param_9,param_2,param_4,param_3,param_5,(code *)puVar1[2]);
      return uVar3;
    }
    uVar3 = 0xffffc780;
  }
  else {
    uVar3 = 0xffffc180;
  }
  return uVar3;
}


