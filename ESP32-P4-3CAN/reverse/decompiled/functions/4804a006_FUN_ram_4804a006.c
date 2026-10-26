/* Firmware entry: 0x4804a006 */

undefined4 FUN_ram_4804a006(int *param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_1 == 0x3c2) {
    if ((((char)param_1[1] == '\b') && ((*(byte *)((int)param_1 + 6) & 3) == 1)) &&
       ((*(byte *)((int)param_1 + 0xb) & 0x40) == 0)) {
      iVar5 = FUN_ram_4ff45158(param_3,param_1,0xe);
      *(byte *)(iVar5 + 0xb) = (byte)(param_2 << 7) | *(byte *)(iVar5 + 0xb) & 0x3f;
      return 1;
    }
  }
  else if (((*param_1 == 0x249) && ((char)param_1[1] == '\x04')) &&
          (iVar5 = FUN_ram_4ff45158(param_3,param_1,0xe), (char)param_1[1] == '\x04')) {
    bVar1 = *(byte *)((int)param_1 + 7);
    if ((*(byte *)((int)param_1 + 6) ==
         ((&DAT_ram_48222c90)[bVar1 >> 4 & 7] ^ (&DAT_ram_48222c98)[bVar1 & 0xf])) &&
       ((bVar1 & 0x60) == 0)) {
      uVar2 = *(undefined1 *)((int)param_1 + 9);
      uVar3 = *(undefined1 *)((int)param_1 + 7);
      iVar4 = param_1[2];
      *(byte *)(iVar5 + 6) = *(byte *)((int)param_1 + 6);
      *(undefined1 *)(iVar5 + 7) = uVar3;
      *(undefined1 *)(iVar5 + 9) = uVar2;
      *(char *)(iVar5 + 8) = (char)iVar4;
      bVar1 = *(byte *)((int)param_1 + 7);
      uVar6 = bVar1 + 1 & 0xf;
      *(undefined *)(iVar5 + 6) = (&DAT_ram_48222c98)[uVar6] ^ (&DAT_ram_48222c90)[param_2];
      *(byte *)(iVar5 + 7) = (byte)uVar6 | bVar1 & 0x80 | (byte)(param_2 << 4);
      return 1;
    }
  }
  return 0;
}


