/* Firmware entry: 0x48129532 */

void FUN_ram_48129532(undefined4 *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined4 *)0x0) {
    PTR_thunk_FUN_ram_4ff2070c_ram_4ff4b96c = thunk_FUN_ram_4ff2070c;
    PTR_thunk_FUN_ram_4ff209c6_ram_4ff4b970 = thunk_FUN_ram_4ff209c6;
    PTR_thunk_FUN_ram_4ff20790_ram_4ff4b974 = thunk_FUN_ram_4ff20790;
    return;
  }
  PTR_thunk_FUN_ram_4ff2070c_ram_4ff4b96c = (undefined *)*param_1;
  PTR_thunk_FUN_ram_4ff209c6_ram_4ff4b970 = (undefined *)param_1[1];
  if ((code *)PTR_thunk_FUN_ram_4ff2070c_ram_4ff4b96c == (code *)0x0) {
    PTR_thunk_FUN_ram_4ff2070c_ram_4ff4b96c = thunk_FUN_ram_4ff2070c;
    if ((code *)PTR_thunk_FUN_ram_4ff209c6_ram_4ff4b970 == (code *)0x0) goto LAB_ram_48129590;
  }
  else {
    if ((code *)PTR_thunk_FUN_ram_4ff209c6_ram_4ff4b970 == (code *)0x0) {
LAB_ram_48129590:
      PTR_thunk_FUN_ram_4ff20790_ram_4ff4b974 = (undefined *)0x0;
      PTR_thunk_FUN_ram_4ff209c6_ram_4ff4b970 = thunk_FUN_ram_4ff209c6;
      if ((code *)PTR_thunk_FUN_ram_4ff2070c_ram_4ff4b96c != thunk_FUN_ram_4ff2070c) {
        return;
      }
      goto LAB_ram_48129580;
    }
    if ((code *)PTR_thunk_FUN_ram_4ff2070c_ram_4ff4b96c != thunk_FUN_ram_4ff2070c) {
      PTR_thunk_FUN_ram_4ff20790_ram_4ff4b974 = (undefined *)0x0;
      return;
    }
  }
  if ((code *)PTR_thunk_FUN_ram_4ff209c6_ram_4ff4b970 != thunk_FUN_ram_4ff209c6) {
    PTR_thunk_FUN_ram_4ff20790_ram_4ff4b974 = (undefined *)0x0;
    return;
  }
LAB_ram_48129580:
  PTR_thunk_FUN_ram_4ff20790_ram_4ff4b974 = thunk_FUN_ram_4ff20790;
  return;
}


