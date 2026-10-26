/* Firmware entry: 0x48145d38 */

void FUN_ram_48145d38(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = param_3 * 0x18;
  if ((byte)(&DAT_ram_4ff6cf5c)[iVar2] < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/etharp.c",0x2ef,
                     "etharp_output_to_arp_index","arp_table[arp_idx].state >= ETHARP_STATE_STABLE")
    ;
  }
  if ((&DAT_ram_4ff6cf5c)[iVar2] == 2) {
    if ((ushort)(&DAT_ram_4ff6cf5a)[param_3 * 0xc] < 0x11d) {
      if ((ushort)(&DAT_ram_4ff6cf5a)[param_3 * 0xc] < 0x10e) goto LAB_ram_48145d78;
      iVar1 = FUN_ram_481457ba(param_1,param_1 + 0xe0,&DAT_ram_4ff6cf54 + iVar2,param_1 + 0xe0,
                               param_1 + 4,&DAT_ram_48237088,&DAT_ram_4ff6cf4c + param_3 * 6);
    }
    else {
      iVar1 = FUN_ram_481457ba(param_1,param_1 + 0xe0,&DAT_ram_48237090,param_1 + 0xe0,param_1 + 4,
                               &DAT_ram_48237088,&DAT_ram_4ff6cf4c + param_3 * 6);
    }
    if (iVar1 == 0) {
      (&DAT_ram_4ff6cf5c)[iVar2] = 3;
    }
  }
LAB_ram_48145d78:
  FUN_ram_4814ca06(param_1,param_2,param_1 + 0xe0,&DAT_ram_4ff6cf54 + iVar2,0x800);
  return;
}


