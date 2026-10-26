/* Firmware entry: 0x48149924 */

void FUN_ram_48149924(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 < 100) {
    FUN_ram_4ff2d260();
  }
  else {
    uVar2 = FUN_ram_4ff2d260();
    uVar2 = uVar2 % (param_2 / 100);
    uVar3 = uVar2 & 0xffff;
    if (uVar2 != 0) goto LAB_ram_48149966;
  }
  uVar3 = 1;
LAB_ram_48149966:
  cVar1 = DAT_ram_4ff6e230;
  if ((*(char *)(param_1 + 0x19) != '\x02') &&
     ((*(char *)(param_1 + 0x19) != '\x01' ||
      ((*(ushort *)(param_1 + 0x1a) != 0 && (*(ushort *)(param_1 + 0x1a) <= uVar3)))))) {
    return;
  }
  *(short *)(param_1 + 0x1a) = (short)uVar3;
  *(undefined1 *)(param_1 + 0x19) = 1;
  if (cVar1 == '\0') {
    FUN_ram_48142636(100,&LAB_ram_4814a198,0);
    DAT_ram_4ff6e230 = 1;
    return;
  }
  return;
}


