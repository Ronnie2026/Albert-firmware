/* Firmware entry: 0x4804220c */

void FUN_ram_4804220c(int param_1,uint param_2,int param_3,int param_4,byte *param_5)

{
  byte bVar1;
  int *piVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar2 = (int *)(param_1 + param_2 * 8);
  bVar1 = (byte)(1 << (param_2 & 0x1f));
  if (*(char *)((int)piVar2 + 5) != '\0') {
    if (param_4 - *piVar2 < 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    if (500 < (uint)(param_4 - *piVar2)) {
      *(undefined1 *)(piVar2 + 1) = 0;
      *(undefined1 *)((int)piVar2 + 5) = 0;
      *(undefined1 *)((int)piVar2 + 6) = 0;
    }
  }
  if ((param_3 - 1U & 0xff) < 5) {
    *piVar2 = param_4;
    *(undefined1 *)((int)piVar2 + 5) = 1;
    if (1 < (param_3 - 3U & 0xff)) {
      if (param_3 == 2) {
        if (*(char *)((int)piVar2 + 6) != '\0') {
          param_5[1] = bVar1 | param_5[1];
        }
        *(undefined1 *)((int)piVar2 + 6) = 0;
        if (*(byte *)(piVar2 + 1) < 2) {
          *(byte *)(piVar2 + 1) = *(byte *)(piVar2 + 1) + 1;
          return;
        }
      }
      else {
        if ((*(char *)((int)piVar2 + 6) == '\0') && (1 < *(byte *)(piVar2 + 1))) {
          *param_5 = bVar1 | *param_5;
        }
        *(undefined1 *)(piVar2 + 1) = 0;
        *(undefined1 *)((int)piVar2 + 6) = 1;
      }
    }
    return;
  }
  *(undefined1 *)piVar2 = 0;
  *(undefined1 *)((int)piVar2 + 1) = 0;
  *(undefined1 *)((int)piVar2 + 2) = 0;
  *(undefined1 *)((int)piVar2 + 3) = 0;
  *(undefined1 *)(piVar2 + 1) = 0;
  *(undefined1 *)((int)piVar2 + 5) = 0;
  *(undefined1 *)((int)piVar2 + 6) = 0;
  param_5[2] = bVar1 | param_5[2];
  return;
}


