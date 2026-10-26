/* Firmware entry: 0x4809bd48 */

void FUN_ram_4809bd48(undefined4 *param_1)

{
  int *piVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (*(code **)(*piVar1 + 0x168) == (code *)&LAB_ram_48096ebe) {
    *piVar1 = (int)&PTR_LAB_ram_4809b712_ram_481f5324;
    FUN_ram_4809b562(piVar1);
    FUN_ram_4ff209c6(piVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4809bd94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x168))(piVar1);
  return;
}


