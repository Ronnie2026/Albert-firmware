/* Firmware entry: 0x48174542 */

undefined4 FUN_ram_48174542(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int *piVar1;
  ushort uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (2 < param_3) {
    pcVar3 = (char *)*param_2;
    *param_2 = pcVar3 + 1;
    if (*pcVar3 == '\x03') {
      uVar2 = *(ushort *)(pcVar3 + 1);
      *param_2 = pcVar3 + 3;
      puVar4 = &DAT_ram_48238fe0;
      do {
        if (*(ushort *)(puVar4 + 1) == (ushort)(uVar2 << 8 | uVar2 >> 8)) {
          *param_1 = *puVar4;
          return 0;
        }
        piVar1 = puVar4 + 3;
        puVar4 = puVar4 + 3;
      } while (*piVar1 != 0);
      return 0xffffb180;
    }
  }
  return 0xffffb080;
}


