/* Firmware entry: 0x4ff2a658 */

void FUN_ram_4ff2a658(undefined4 param_1,undefined4 param_2,int param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff50e94 != 0) && (DAT_ram_4ff50eb8 == 0)) {
    if ((DAT_ram_4ff50eac == 0) || (39999999 < (uint)(param_3 - DAT_ram_4ff50ebc))) {
      if ((DAT_ram_4ff50ec8 != 0) && (DAT_ram_4ff50ecc != -1)) {
        DAT_ram_4ff50ecc = DAT_ram_4ff50ecc + 1;
      }
      DAT_ram_4ff50ea4 = DAT_ram_4ff50ea4 + 1;
      FUN_ram_4ff2a348(&DAT_ram_4ff509f4,param_1,param_2,param_3);
      DAT_ram_4ff50ec8 = 1;
      if (DAT_ram_4ff50eac == -1) {
        DAT_ram_4ff50ec8 = 1;
        DAT_ram_4ff50ebc = param_3;
        return;
      }
      DAT_ram_4ff50eac = DAT_ram_4ff50eac + 1;
      DAT_ram_4ff50ebc = param_3;
    }
    else {
      if (DAT_ram_4ff50eb0 == -1) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      DAT_ram_4ff50eb0 = DAT_ram_4ff50eb0 + 1;
    }
  }
  return;
}


