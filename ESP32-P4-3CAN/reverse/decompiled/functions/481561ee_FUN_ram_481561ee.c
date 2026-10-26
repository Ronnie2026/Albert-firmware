/* Firmware entry: 0x481561ee */

void FUN_ram_481561ee(int param_1,char *param_2)

{
  byte bVar1;
  size_t sVar2;
  undefined1 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(char **)(param_1 + 8) = param_2;
  uVar3 = 0;
  if (param_2 != (char *)0x0) {
    sVar2 = strlen(param_2);
    uVar3 = 0xff;
    if (sVar2 < 0xff) {
      bVar1 = *(byte *)(param_1 + 0x10);
      *(char *)(param_1 + 0x18) = (char)sVar2;
      goto joined_r0x4815624c;
    }
  }
  bVar1 = *(byte *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x18) = uVar3;
joined_r0x4815624c:
  if (bVar1 == 5) {
    *(undefined1 *)(param_1 + 0x10) = 4;
    return;
  }
  if (bVar1 < 6) {
    if (bVar1 == 1) {
      *(undefined1 *)(param_1 + 0x10) = 0;
      return;
    }
    if (bVar1 == 3) {
      *(undefined1 *)(param_1 + 0x10) = 2;
    }
  }
  else if ((byte)(bVar1 - 6) < 4) {
    FUN_ram_4815612c(param_1,4);
    return;
  }
  return;
}


