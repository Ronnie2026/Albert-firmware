/* Firmware entry: 0x480b69b4 */

void FUN_ram_480b69b4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  
  iVar1 = DAT_ram_4ff6dc94;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4819ad74(DAT_ram_4ff6dc94 + 0x11b1f,0x41,&DAT_ram_481cd004,param_1);
  uVar3 = 0;
  if (*(char *)(iVar1 + 0x11a5c) != '\0') {
    uVar3 = 6;
  }
  *(undefined1 *)(iVar1 + 0x11a40) = uVar3;
  FUN_ram_480b66f6();
  *(undefined4 *)(DAT_ram_4ff6dc9c + 0x87bc0) = param_1;
  uVar2 = FUN_ram_48025ba6();
  *(undefined4 *)(DAT_ram_4ff6dc9c + 0x87b50) = uVar2;
  return;
}


