/* Firmware entry: 0x4804ad20 */

void FUN_ram_4804ad20(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((*(char *)(param_1 + 0xa5) == '\0') || (*(char *)(param_1 + 0xac) != '\0')) ||
     (*(char *)(param_1 + 0xa0) == '\x04')) {
    return;
  }
  if ((((*(char *)(param_1 + 0x97) == '\0') || (*(char *)(param_1 + 0x98) == '\0')) ||
      ((*(byte *)(param_1 + 0x9a) < 2 ||
       ((*(char *)(param_1 + 0x99) != *(char *)(param_1 + 0x9b) ||
        (3 < (byte)(*(char *)(param_1 + 0x99) - 3U))))))) ||
     (1000 < (uint)(param_2 - *(int *)(param_1 + 0x9c)))) {
    FUN_ram_4804a9c8(param_1,param_2,2,7);
    return;
  }
  *(undefined1 *)(param_1 + 0xa0) = 2;
  if (*(char *)(param_1 + 7) != '\0') {
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined1 *)(param_1 + 0xa2) = 3;
    return;
  }
  if (*(char *)(param_1 + 0xa2) == '\x02') {
    if (((((*(char *)(param_1 + 0xa6) != '\0') && (*(char *)(param_1 + 0x85) != '\0')) &&
         ((uint)(param_2 - *(int *)(param_1 + 0x8c)) < 0x12d)) &&
        ((*(char *)(param_1 + 0x86) != '\0' && (1 < *(byte *)(param_1 + 0x88))))) &&
       ((*(char *)(param_1 + 0x87) == *(char *)(param_1 + 0x89) &&
        (*(char *)(param_1 + 0x87) == '\x03')))) {
      *(undefined4 *)(param_1 + 0xa8) = 0;
      *(undefined4 *)(param_1 + 0xb4) = 0;
      *(undefined2 *)(param_1 + 0xa2) = 3;
      return;
    }
    iVar2 = *(int *)(param_1 + 0xa8);
    if (iVar2 == 0) {
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xa2) = 3;
    if (*(char *)(param_1 + 0x85) == '\0') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    if (300 < (uint)(param_2 - *(int *)(param_1 + 0x8c))) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    if (*(char *)(param_1 + 0x86) == '\0') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    if (*(byte *)(param_1 + 0x88) < 2) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    cVar1 = *(char *)(param_1 + 0x87);
    if (cVar1 != *(char *)(param_1 + 0x89)) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    if (cVar1 == '\x05') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    if (cVar1 == '\x03') {
      *(undefined4 *)(param_1 + 0xb4) = 0;
      return;
    }
    iVar2 = *(int *)(param_1 + 0xb4);
    if (iVar2 == 0) {
      iVar2 = param_2;
      if (param_2 == 0) {
        iVar2 = 1;
      }
      *(int *)(param_1 + 0xb4) = iVar2;
    }
  }
  if ((uint)(param_2 - iVar2) < 0x3e9) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return;
  }
  *(undefined1 *)(param_1 + 0xa4) = 2;
  FUN_ram_4804a9c8(param_1,param_2,0xf,7);
  return;
}


