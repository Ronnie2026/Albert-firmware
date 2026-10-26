/* Firmware entry: 0x4801bf80 */

undefined4 FUN_ram_4801bf80(char *param_1,uint *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_1 == '\x01') {
    sVar1 = *(short *)(param_1 + 1);
    if (sVar1 == 6) {
      pcVar4 = param_1 + 3;
      iVar2 = FUN_ram_4ff45520(pcVar4,&DAT_ram_481b886c,6);
      if ((iVar2 == 0) || (iVar2 = FUN_ram_4ff45520(pcVar4,"RPCEvt",6), iVar2 == 0)) {
        if (param_1[9] == '\x02') {
          *param_2 = (uint)*(ushort *)(param_1 + 10);
          return 0;
        }
        uVar3 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"serial_if","E (%lu) %s: Data Type not matched, exp %d, recvd %d\n\n",
                         uVar3,"serial_if",2,param_1[9]);
      }
      else {
        uVar3 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"serial_if",
                         "E (%lu) %s: Endpoint Name not matched, exp [%s] or [%s], recvd [%s]\n\n",
                         uVar3,"serial_if",&DAT_ram_481b886c,"RPCEvt",pcVar4);
      }
    }
    else {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"serial_if",
                       "E (%lu) %s: Endpoint length not matched, exp [For %s, %lu OR For %s, %lu], recvd %d\n\n"
                       ,uVar3,"serial_if",&DAT_ram_481b886c,6,"RPCEvt",6,sVar1);
    }
  }
  else {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"serial_if","E (%lu) %s: Endpoint type not matched, exp %d, recvd %d\n\n",
                     uVar3,"serial_if",1,*param_1);
  }
  return 0xff;
}


