/* Firmware entry: 0x48009210 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48009210(uint param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = param_1 * 0x38;
  FUN_ram_4ff216d6(&DAT_ram_4ff48220 + iVar1);
  if ((&DAT_ram_4ff48238)[iVar1] != '\0') {
    if (param_1 - 1 < 4) {
      FUN_ram_4ff3122a();
      puVar2 = *(undefined1 **)(&DAT_ram_4ff48228 + iVar1);
      if (puVar2 == &DAT_ram_500ca000) {
        _DAT_ram_500e6068 = _DAT_ram_500e6068 & 0xfbffffff;
      }
      else if (puVar2 == &DAT_ram_500cb000) {
        _DAT_ram_500e606c = _DAT_ram_500e606c & 0xfbffffff;
      }
      else if (puVar2 == &DAT_ram_500cc000) {
        _DAT_ram_500e6070 = _DAT_ram_500e6070 & 0xfbffffff;
      }
      else if (puVar2 == &DAT_ram_500cd000) {
        _DAT_ram_500e6074 = _DAT_ram_500e6074 & 0xfbffffff;
      }
      else {
        if (puVar2 != &DAT_ram_500ce000) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e06();
        }
        _DAT_ram_500e6078 = _DAT_ram_500e6078 & 0xfbffffff;
      }
      *(uint *)(puVar2 + 0x88) = *(uint *)(puVar2 + 0x88) & 0xfeffffff;
      *(uint *)(puVar2 + 0x88) = *(uint *)(puVar2 + 0x88) & 0xfdffffff;
      FUN_ram_4ff31240();
      FUN_ram_4ff3122a();
      if (param_1 == 3) {
        _DAT_ram_500e601c = _DAT_ram_500e601c & 0xfffffbff;
        _DAT_ram_500e6018 = _DAT_ram_500e6018 & 0xffdfffff;
      }
      else if (param_1 == 4) {
        _DAT_ram_500e601c = _DAT_ram_500e601c & 0xfffff7ff;
        _DAT_ram_500e6018 = _DAT_ram_500e6018 & 0xffbfffff;
      }
      else if (param_1 == 2) {
        _DAT_ram_500e601c = _DAT_ram_500e601c & 0xfffffdff;
        _DAT_ram_500e6018 = _DAT_ram_500e6018 & 0xffefffff;
      }
      else {
        _DAT_ram_500e601c = _DAT_ram_500e601c & 0xfffffeff;
        _DAT_ram_500e6018 = _DAT_ram_500e6018 & 0xfff7ffff;
      }
      FUN_ram_4ff31240();
    }
    else if (4 < param_1) {
      _DAT_ram_50121088 = _DAT_ram_50121088 & 0xfcffffff;
      FUN_ram_4ff3122a();
      _DAT_ram_50120000 = _DAT_ram_50120000 & 0xdfffffff;
      FUN_ram_4ff31240();
      (&DAT_ram_4ff48238)[param_1 * 0x38] = 0;
      goto LAB_ram_4800931c;
    }
    (&DAT_ram_4ff48238)[param_1 * 0x38] = 0;
  }
LAB_ram_4800931c:
  FUN_ram_4ff216e2(&DAT_ram_4ff48220 + iVar1);
  return;
}


