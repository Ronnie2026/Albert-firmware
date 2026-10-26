/* Firmware entry: 0x48137a96 */

void FUN_ram_48137a96(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/apps/sntp/sntp.c",0x236,"sntp_send_request",
                     "server_addr != NULL");
  }
  iVar2 = FUN_ram_4813ad9a(0x4a,0x30,0x280);
  if (iVar2 != 0) {
    puVar3 = *(undefined1 **)(iVar2 + 4);
    memset(puVar3 + 1,0,0x2f);
    uVar1 = DAT_ram_4ff6e198;
    *puVar3 = 0x23;
    FUN_ram_481431f0(uVar1,iVar2,param_1,0x7b);
    FUN_ram_4813ac74(iVar2);
    DAT_ram_4ff6c888 = DAT_ram_4ff6c888 << 1;
    FUN_ram_4814268a(&LAB_ram_48137a38,0);
    FUN_ram_48142636(15000,&LAB_ram_48137a38,0);
    return;
  }
  FUN_ram_4814268a(&LAB_ram_48137b76,0);
  FUN_ram_48142636(15000,&LAB_ram_48137b76,0);
  return;
}


