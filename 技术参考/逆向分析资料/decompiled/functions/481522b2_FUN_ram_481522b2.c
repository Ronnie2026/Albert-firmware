/* Firmware entry: 0x481522b2 */

bool FUN_ram_481522b2(int *param_1,char *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = *param_1;
  if ((*(uint *)(iVar4 + 0x1218) & 3) == 2) {
    param_3 = param_3 + -10;
    if (param_3 < 0) {
      return false;
    }
    if (param_2[1] != '\n') {
      return false;
    }
    if (*param_2 != '\x01') {
      return false;
    }
    iVar2 = FUN_ram_48137fd6((uint)(byte)param_2[5] |
                             (((uint)(byte)param_2[3] | (*(ushort *)(param_2 + 2) & 0xff) << 8) << 8
                             | (uint)(byte)param_2[4]) << 8);
    if (*(int *)(iVar4 + 0x121c) != iVar2) {
      return false;
    }
    iVar2 = FUN_ram_48137fd6((uint)(byte)param_2[9] |
                             (((uint)(byte)param_2[7] | (*(ushort *)(param_2 + 6) & 0xff) << 8) << 8
                             | (uint)(byte)param_2[8]) << 8);
    if (*(int *)(iVar4 + 0x1220) != iVar2) {
      return false;
    }
    param_2 = param_2 + 10;
  }
  uVar1 = *(ushort *)(iVar4 + 0x1218);
  if ((uVar1 & 8) != 0) {
    uVar3 = (uint)((uVar1 & 0x10) == 0) * 2 + 4;
    param_3 = param_3 - uVar3;
    if (param_3 < 0) {
      return false;
    }
    if ((byte)param_2[1] != uVar3) {
      return false;
    }
    if (*param_2 != '\x02') {
      return false;
    }
    if (*(ushort *)(iVar4 + 0x122c) !=
        (ushort)((ushort)(byte)param_2[3] | *(short *)(param_2 + 2) << 8)) {
      return false;
    }
    if ((uVar1 & 0x10) == 0) {
      if (*(char *)(iVar4 + 0x122e) != param_2[4]) {
        return false;
      }
      if ((uint)(byte)param_2[5] != (*(uint *)(iVar4 + 0x1218) >> 5 & 1)) {
        return false;
      }
      param_2 = param_2 + 6;
    }
    else {
      param_2 = param_2 + 4;
    }
  }
  if ((uVar1 & 1) != 0) {
    param_3 = param_3 + -6;
    if (param_3 < 0) {
      return false;
    }
    if (param_2[1] != '\x06') {
      return false;
    }
    if (*param_2 != '\x03') {
      return false;
    }
    iVar2 = FUN_ram_48137fd6((uint)(byte)param_2[5] |
                             (((uint)(byte)param_2[3] | (*(ushort *)(param_2 + 2) & 0xff) << 8) << 8
                             | (uint)(byte)param_2[4]) << 8);
    if (*(int *)(iVar4 + 0x121c) != iVar2) {
      return false;
    }
    uVar1 = *(ushort *)(iVar4 + 0x1218);
    param_2 = param_2 + 6;
  }
  if ((uVar1 & 0x100) != 0) {
    param_3 = param_3 + -6;
    if (param_3 < 0) {
      return false;
    }
    if (param_2[1] != '\x06') {
      return false;
    }
    if (*param_2 != -0x7f) {
      return false;
    }
    iVar2 = FUN_ram_48137fd6((uint)(byte)param_2[5] |
                             (((uint)(byte)param_2[3] | (*(ushort *)(param_2 + 2) & 0xff) << 8) << 8
                             | (uint)(byte)param_2[4]) << 8);
    if (*(int *)(iVar4 + 0x1224) != iVar2) {
      return false;
    }
    uVar1 = *(ushort *)(iVar4 + 0x1218);
    param_2 = param_2 + 6;
  }
  if (((uVar1 & 0x200) != 0) &&
     ((((param_3 = param_3 + -6, param_3 < 0 || (param_2[1] != '\x06')) || (*param_2 != -0x7d)) ||
      (iVar2 = FUN_ram_48137fd6((uint)(byte)param_2[5] |
                                (((uint)(byte)param_2[3] | (*(ushort *)(param_2 + 2) & 0xff) << 8)
                                 << 8 | (uint)(byte)param_2[4]) << 8),
      *(int *)(iVar4 + 0x1228) != iVar2)))) {
    return false;
  }
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return param_3 == 0;
}


