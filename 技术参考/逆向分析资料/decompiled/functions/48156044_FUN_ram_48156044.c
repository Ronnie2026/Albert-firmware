/* Firmware entry: 0x48156044 */

void FUN_ram_48156044(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 < 6) {
    if (bVar1 < 4) {
      return;
    }
    if ((char)param_1[5] != '\0') {
      uVar2 = *(byte *)((int)param_1 + 0x12) + 1;
      *(ushort *)((int)param_1 + 0x12) = uVar2 * 0x100 | uVar2 & 0xff;
      iVar3 = *param_1;
      FUN_ram_48155f4a();
      FUN_ram_4814268a(FUN_ram_48156044,param_1);
      FUN_ram_48142636((uint)*(byte *)(iVar3 + 4) * 1000,FUN_ram_48156044,param_1);
      *(char *)(param_1 + 5) = (char)param_1[5] + -1;
      return;
    }
    *(char *)(param_1 + 4) = (bVar1 != 4) + '\x02';
    UNRECOVERED_JUMPTABLE = *(code **)(param_1[1] + 0x28);
  }
  else {
    if (2 < (byte)(bVar1 - 6)) {
      return;
    }
    if ((char)param_1[5] != '\0') {
      if (*(code **)(param_1[1] + 0x30) != (code *)0x0) {
        (**(code **)(param_1[1] + 0x30))();
      }
      FUN_ram_48155c50(param_1,1);
      if ((char)param_1[4] != '\a') {
        return;
      }
      *(undefined1 *)(param_1 + 4) = 6;
      return;
    }
    *(undefined1 *)(param_1 + 4) = 3;
    if ((*(byte *)((int)param_1 + 0x11) & 1) != 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(param_1[1] + 0x28);
  }
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x481560b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


