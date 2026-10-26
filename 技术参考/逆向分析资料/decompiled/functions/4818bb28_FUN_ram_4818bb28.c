/* Firmware entry: 0x4818bb28 */

void FUN_ram_4818bb28(int param_1,int param_2,int *param_3)

{
  int iStack_24;
  int iStack_20;
  int local_1c;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_18 = *(undefined1 *)(param_2 + 0x1c);
  uStack_14 = *(undefined1 *)(param_2 + 0x20);
  uStack_16 = *(undefined1 *)(param_2 + 0x1e);
  uStack_17 = *(undefined1 *)(param_2 + 0x1d);
  uStack_15 = *(undefined1 *)(param_2 + 0x1f);
  uStack_13 = *(undefined1 *)(param_2 + 0x21);
  iStack_24 = *(int *)(param_2 + 0x18);
  iStack_20 = *(int *)(param_2 + 0xc);
  local_1c = *(int *)(param_2 + 0x10);
  if (iStack_24 != 0) {
    *param_3 = iStack_24;
    FUN_ram_48145ee8(&iStack_24,&uStack_18);
    return;
  }
  if (iStack_20 != 0) {
    *param_3 = iStack_20;
    if (local_1c == 0) {
      return;
    }
    FUN_ram_48145ee8(&iStack_20,&uStack_18);
    return;
  }
  if ((int)((uint)*(ushort *)(param_2 + 10) << 0x18) < 0) {
    *param_3 = *(int *)(param_1 + 4);
    return;
  }
  *param_3 = local_1c;
  FUN_ram_48145ee8(&local_1c,&uStack_18);
  return;
}


