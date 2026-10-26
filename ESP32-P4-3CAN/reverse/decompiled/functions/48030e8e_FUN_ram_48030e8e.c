/* Firmware entry: 0x48030e8e */

void FUN_ram_48030e8e(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0x95 < (param_2 - 1 & 0xffff)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(ushort *)(param_1 + 4) = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *(ushort *)(param_1 + 7) = 0;
    *(undefined1 *)((int)param_1 + 0x1e) = 0;
    return;
  }
  uVar2 = (ushort)param_2;
  if (*(char *)((int)param_1 + 0x1b) != '\0') {
    if ((int)(param_3 - param_1[1]) < 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    if (500 < param_3 - param_1[1]) {
      *(ushort *)((int)param_1 + 10) = 0;
      *(ushort *)(param_1 + 4) = 0;
      param_1[1] = param_3;
      *(ushort *)(param_1 + 2) = uVar2;
      param_1[3] = param_3;
      param_1[5] = 0;
      *(undefined1 *)((int)param_1 + 0x1e) = 0;
      *param_1 = param_2 << 0x10 | param_2;
      param_1[6] = 0x1000000;
      *(ushort *)(param_1 + 7) = 1;
      return;
    }
  }
  uVar1 = *param_1;
  param_1[1] = param_3;
  *(undefined1 *)((int)param_1 + 0x1b) = 1;
  *(ushort *)param_1 = uVar2;
  if (*(char *)((int)param_1 + 0x1e) != '\0') {
    if (*(ushort *)((int)param_1 + 2) <= param_2) {
      if ((*(char *)((int)param_1 + 0x1a) == '\0') || ((ushort)param_1[4] != param_2)) {
        uVar3 = 1;
        *(ushort *)(param_1 + 4) = uVar2;
        param_1[5] = param_3;
        *(ushort *)(param_1 + 6) = 1;
        *(undefined1 *)((int)param_1 + 0x1a) = 1;
      }
      else {
        uVar3 = (ushort)param_1[6];
        if (uVar3 != 0xffff) {
          *(ushort *)(param_1 + 6) = uVar3 + 1;
          uVar3 = uVar3 + 1;
        }
      }
      if (uVar3 < 2) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      if ((int)(param_3 - param_1[5]) < 2000) {
        return;
      }
    }
    *(undefined1 *)((int)param_1 + 0x1e) = 0;
    *(ushort *)((int)param_1 + 2) = uVar2;
    *(ushort *)((int)param_1 + 10) = 0;
    *(ushort *)(param_1 + 2) = uVar2;
    param_1[3] = param_3;
    *(ushort *)(param_1 + 4) = 0;
    param_1[5] = 0;
    *(ushort *)(param_1 + 6) = 0;
    *(undefined1 *)((int)param_1 + 0x1a) = 0;
    *(ushort *)(param_1 + 7) = 1;
    return;
  }
  *(ushort *)((int)param_1 + 2) = uVar2;
  if (param_2 == (ushort)uVar1) {
    return;
  }
  if ((char)param_1[7] != '\0') {
    if (*(char *)((int)param_1 + 0x1d) != '\0') {
      uVar3 = *(ushort *)((int)param_1 + 10);
      if ((param_3 - param_1[3] < 0xbb9) && (param_2 == (ushort)param_1[2])) {
        *(undefined1 *)((int)param_1 + 0x1e) = 1;
        if (param_2 < uVar3) {
          uVar3 = uVar2;
        }
        *(ushort *)((int)param_1 + 2) = uVar3;
        *(ushort *)(param_1 + 4) = uVar3;
        param_1[5] = param_3;
        *(ushort *)(param_1 + 6) = 0;
        *(undefined1 *)((int)param_1 + 0x1a) = 0;
        return;
      }
      *(ushort *)(param_1 + 2) = uVar3;
    }
    *(ushort *)((int)param_1 + 10) = uVar2;
    param_1[3] = param_3;
    *(undefined1 *)((int)param_1 + 0x1d) = 1;
    return;
  }
  *(ushort *)(param_1 + 2) = uVar2;
  *(ushort *)((int)param_1 + 10) = 0;
  param_1[3] = param_3;
  *(ushort *)(param_1 + 7) = 1;
  return;
}


