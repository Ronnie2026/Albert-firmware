/* Firmware entry: 0x4804162c */

undefined4 FUN_ram_4804162c(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((((((byte)(*(char *)(param_1 + 3) - 10U) < 0x5b) && ((byte)(*(char *)(param_1 + 4) - 1U) < 7)
         ) && (*(undefined **)(param_1 + 6) <= &pmpaddr56)) &&
       (((byte)(*(char *)(param_1 + 10) - 10U) < 0x5b && ((byte)(*(char *)(param_1 + 0xb) - 1U) < 7)
        ))) && ((*(byte *)(param_1 + 0x10) < 5 &&
                ((*(byte *)(param_1 + 0x11) < 2 && ((byte)(*(char *)(param_1 + 0x12) - 10U) < 0x5b))
                )))) &&
     ((*(byte *)(param_1 + 0x13) < 3 && ((byte)(*(char *)(param_1 + 0x14) - 1U) < 0x3f)))) {
    pbVar2 = (byte *)(param_1 + 0x19);
    while (bVar1 = *pbVar2, pbVar2 = pbVar2 + 5, bVar1 < 0x65) {
      if (pbVar2 == (byte *)(param_1 + 0x37)) {
        return 1;
      }
    }
  }
  return 0;
}


