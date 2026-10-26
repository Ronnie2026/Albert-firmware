/* Firmware entry: 0x481550ac */

void FUN_ram_481550ac(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = param_1 + 0x24;
  if (*(char *)(param_1 + 0x20) != '\0') {
    FUN_ram_4814ced4(param_1,0xb);
  }
  if (*(char *)(param_1 + 0x35) < '\0') {
    FUN_ram_4814268a(&LAB_ram_481549e8,iVar2);
    *(undefined1 *)(param_1 + 0x34) = 3;
    FUN_ram_481561ee(iVar2,param_2);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x34);
    FUN_ram_481561ee(iVar2,param_2);
    if (cVar1 != '\x03') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
  }
  if ((*(byte *)(param_1 + 0x35) & 0x85) == 0) {
    return;
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) & 0x7f;
  FUN_ram_48151b58(*(undefined4 *)(param_1 + 0x24));
  return;
}


