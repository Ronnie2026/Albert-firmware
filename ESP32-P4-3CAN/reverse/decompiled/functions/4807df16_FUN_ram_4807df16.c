/* Firmware entry: 0x4807df16 */

void FUN_ram_4807df16(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 2) == '\0') {
    uVar1 = (*(code *)*param_1)();
    param_1[1] = uVar1;
    fence();
    fence();
    iVar2 = param_1[1];
    if (((DAT_ram_4ff6def0 == 0) || (1000000 < (uint)(iVar2 - DAT_ram_4ff6deec))) ||
       (2000000 < (uint)(iVar2 - DAT_ram_4ff6def0))) {
      fence();
      DAT_ram_4ff6def0 = iVar2;
    }
    DAT_ram_4ff6dee8 = DAT_ram_4ff6dee8 + 1;
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
  return;
}


