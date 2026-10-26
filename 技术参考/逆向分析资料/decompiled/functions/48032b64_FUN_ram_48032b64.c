/* Firmware entry: 0x48032b64 */

undefined4 FUN_ram_48032b64(int param_1,char *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_2 != '\0') {
    return 0;
  }
  if ((((*(code **)(param_1 + 4) == (code *)0x0) ||
       (iVar1 = (**(code **)(param_1 + 4))(),
       (uint)(iVar1 - *(int *)(param_1 + 8)) < *(uint *)(param_1 + 0xc))) &&
      (DAT_ram_4ff6dfb8 != (code *)0x0)) &&
     ((DAT_ram_4ff6dfb4 != (code *)0x0 &&
      (iVar1 = (*DAT_ram_4ff6dfb4)(), UNRECOVERED_JUMPTABLE = DAT_ram_4ff6dfb8, iVar1 != 0)))) {
    *param_2 = '\x01';
                    /* WARNING: Could not recover jumptable at 0x48032bba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1);
    return uVar2;
  }
  return 0;
}


