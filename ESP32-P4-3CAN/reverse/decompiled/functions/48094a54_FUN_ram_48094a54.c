/* Firmware entry: 0x48094a54 */

void FUN_ram_48094a54(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 4) == '\0') {
    puVar1 = &DAT_ram_500d7000;
  }
  else if (*(char *)(param_1 + 4) == '\x01') {
    puVar1 = &DAT_ram_500d8000;
  }
  else {
    puVar1 = &DAT_ram_500d9000;
  }
  uVar3 = *(undefined4 *)(puVar1 + 0x3c);
  uVar2 = *(undefined4 *)(puVar1 + 0x38);
  FUN_ram_4ff3ec14(param_1 + 0x874,0xffffffff);
  *(short *)(param_1 + 0x8c8) = (short)uVar3;
  *(short *)(param_1 + 0x8ca) = (short)uVar2;
  *(undefined1 *)(param_1 + 0x8cc) = 1;
  FUN_ram_4ff3ee10(param_1 + 0x874);
  return;
}


