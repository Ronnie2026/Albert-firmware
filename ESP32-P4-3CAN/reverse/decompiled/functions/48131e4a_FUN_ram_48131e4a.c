/* Firmware entry: 0x48131e4a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48131e4a(uint param_1,uint param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 3) {
    _DAT_ram_5012a01c = 1 << (param_1 & 0x1f);
    *(uint *)(param_1 * 4 + 0x5012a034) = *(uint *)(param_1 * 4 + 0x5012a034) & 0xffffffef;
    *(uint *)(param_1 * 4 + 0x5012a0f4) = *(uint *)(param_1 * 4 + 0x5012a0f4) & 0xfffffe07 | 0x100;
    *(uint *)(param_1 * 4 + 0x5012b008) = *(uint *)(param_1 * 4 + 0x5012b008) & 0xfffffbff;
    return;
  }
  if (3 < param_2) {
    if (param_2 == 4) {
      *(uint *)(param_1 * 4 + 0x5012a034) = *(uint *)(param_1 * 4 + 0x5012a034) | 0x10;
      _DAT_ram_5012a018 = 1 << (param_1 & 0x1f);
      *(uint *)(param_1 * 4 + 0x5012b008) = *(uint *)(param_1 * 4 + 0x5012b008) & 0xfffffbff;
      return;
    }
    if (param_2 == 5) {
      *(uint *)(param_1 * 4 + 0x5012a034) = *(uint *)(param_1 * 4 + 0x5012a034) | 0x10;
      _DAT_ram_5012a018 = 1 << (param_1 & 0x1f);
      *(uint *)(param_1 * 4 + 0x5012b008) = *(uint *)(param_1 * 4 + 0x5012b008) | 0x400;
      return;
    }
    return;
  }
  if (param_2 == 1) {
    _DAT_ram_5012a018 = 1 << (param_1 & 0x1f);
    *(uint *)(param_1 * 4 + 0x5012a034) = *(uint *)(param_1 * 4 + 0x5012a034) & 0xffffffef;
    *(uint *)(param_1 * 4 + 0x5012b008) = *(uint *)(param_1 * 4 + 0x5012b008) & 0xfffffbff;
    return;
  }
  if (param_2 != 2) {
    _DAT_ram_5012a01c = 1 << (param_1 & 0x1f);
    *(uint *)(param_1 * 4 + 0x5012a034) = *(uint *)(param_1 * 4 + 0x5012a034) & 0xffffffef;
    *(uint *)(param_1 * 4 + 0x5012a0f4) = *(uint *)(param_1 * 4 + 0x5012a0f4) & 0xfffffe07 | 0x100;
    *(uint *)(param_1 * 4 + 0x5012b008) = *(uint *)(param_1 * 4 + 0x5012b008) | 0x400;
    return;
  }
  _DAT_ram_5012a018 = 1 << (param_1 & 0x1f);
  *(uint *)(param_1 * 4 + 0x5012a034) = *(uint *)(param_1 * 4 + 0x5012a034) & 0xffffffef;
  *(uint *)(param_1 * 4 + 0x5012b008) = *(uint *)(param_1 * 4 + 0x5012b008) | 0x400;
  return;
}


