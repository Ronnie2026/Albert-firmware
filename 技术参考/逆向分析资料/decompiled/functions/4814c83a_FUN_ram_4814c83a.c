/* Firmware entry: 0x4814c83a */

void FUN_ram_4814c83a(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = *(byte *)(param_1 + param_2 + 0x94);
  if (((bVar1 & 0xf7) == 0) || (bVar1 == 0x40)) {
    if (((param_3 & 0xf7) != 0) && (param_3 != 0x40)) {
      DAT_ram_4ff6d064 = *(uint *)(param_2 * 0x18 + param_1 + 0x58) | 0xff;
      DAT_ram_4ff6d068 = *(char *)(param_1 + 0xea) + '\x01';
      DAT_ram_4ff6d05c = 0;
      DAT_ram_4ff6d058 = 0x2ff;
      DAT_ram_4ff6d060 = 0x1000000;
      FUN_ram_48149e44(param_1,&DAT_ram_4ff6d058);
      return;
    }
  }
  else if (((param_3 & 0xf7) == 0) || (param_3 == 0x40)) {
    DAT_ram_4ff6d064 = *(uint *)(param_2 * 0x18 + param_1 + 0x58) | 0xff;
    DAT_ram_4ff6d068 = *(char *)(param_1 + 0xea) + '\x01';
    DAT_ram_4ff6d05c = 0;
    DAT_ram_4ff6d058 = 0x2ff;
    DAT_ram_4ff6d060 = 0x1000000;
    FUN_ram_48149f9a(param_1,&DAT_ram_4ff6d058);
    return;
  }
  return;
}


