/* Firmware entry: 0x4801b976 */

undefined4 FUN_ram_4801b976(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 local_80 [29];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar6 = local_80;
  puVar1 = local_80;
  pcVar7 = "\x01\x03";
  do {
    uVar2 = *(undefined4 *)(pcVar7 + 4);
    uVar4 = *(undefined4 *)(pcVar7 + 8);
    uVar5 = *(undefined4 *)(pcVar7 + 0xc);
    *puVar6 = *(undefined4 *)pcVar7;
    puVar6[1] = uVar2;
    puVar6[2] = uVar4;
    puVar6[3] = uVar5;
    pcVar7 = pcVar7 + 0x10;
    puVar6 = puVar6 + 4;
  } while (pcVar7 != "transport_pserial_send");
  do {
    uVar2 = *puVar1;
    puVar6 = puVar1 + 1;
    puVar1 = puVar1 + 2;
    iVar3 = FUN_ram_48012910(uVar2,*puVar6);
    if (iVar3 != 0) {
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"RPC_WRAP","E (%lu) %s: event callback register failed for event[%u]\n",
                       uVar4,"RPC_WRAP",uVar2);
      return 0xffffffff;
    }
  } while (puVar1 != local_80 + 0x1c);
  return 0;
}


