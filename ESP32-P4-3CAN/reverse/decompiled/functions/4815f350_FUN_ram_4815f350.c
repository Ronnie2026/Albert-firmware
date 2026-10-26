/* Firmware entry: 0x4815f350 */

void FUN_ram_4815f350(undefined4 param_1,int param_2)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_54;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4819a582(param_1,"Name: %s\n",param_2 + 0x74);
  if ((*(uint *)(param_2 + 0xc4) & 2) == 0) {
    if ((*(uint *)(param_2 + 0xc4) & 4) != 0) {
      FUN_ram_4819a582(param_1,"Type: %s\n",&DAT_ram_481db670);
      iVar4 = *(int *)(param_2 + 0xc0);
      bVar1 = false;
      goto joined_r0x4815f3d0;
    }
    if (*(int *)(param_2 + 0x68) << 1 < 0) {
      if (*(int *)(param_2 + 0x68) << 7 < 0) {
        pcVar2 = "SDHC/SDXC (UHS-I)";
        bVar1 = false;
      }
      else {
        pcVar2 = "SDHC";
        bVar1 = false;
      }
    }
    else {
      pcVar2 = "SDSC";
      bVar1 = false;
    }
  }
  else {
    pcVar2 = "SDIO";
    bVar1 = true;
  }
  FUN_ram_4819a582(param_1,"Type: %s\n",pcVar2);
  iVar4 = *(int *)(param_2 + 0xc0);
joined_r0x4815f3d0:
  if (iVar4 == 0) {
    FUN_ram_4819aa70("Speed: N/A\n",1,0xb,param_1);
  }
  else {
    uVar6 = __floatsidf(iVar4);
    if (iVar4 < 1000) {
      puStack_54 = &DAT_ram_481db698;
    }
    else {
      uVar6 = __divdf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_ram_481f4cd8,DAT_ram_481f4cdc)
      ;
      puStack_54 = &DAT_ram_481db69c;
    }
    uVar5 = FUN_ram_48195c96((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    uVar3 = *(uint *)(param_2 + 0xbc);
    uVar6 = __floatunsidf(uVar3);
    if (999 < uVar3) {
      uVar6 = __divdf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_ram_481f4cd8,DAT_ram_481f4cdc)
      ;
    }
    uVar7 = __extendsfdf2(uVar5);
    FUN_ram_48195c96((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    __extendsfdf2();
    FUN_ram_4819a582(param_1,"Speed: %.2f %s (limit: %.2f %s)%s\n",(int)uVar7,
                     (int)((ulonglong)uVar7 >> 0x20),puStack_54);
  }
  uVar3 = (uint)((ulonglong)
                 ((longlong)*(int *)(param_2 + 0x90) * (longlong)*(int *)(param_2 + 0x94)) >> 0x20);
  FUN_ram_4819a582(param_1,"Size: %lluMB\n",
                   uVar3 << 0xc |
                   (uint)(*(int *)(param_2 + 0x90) * *(int *)(param_2 + 0x94)) >> 0x14,uVar3 >> 0x14
                  );
  FUN_ram_4819a582(param_1,"CSD: ver=%d, sector_size=%d, capacity=%d read_bl_len=%d\n",
                   (uint)((*(uint *)(param_2 + 0xc4) & 4) == 0) + *(int *)(param_2 + 0x88),
                   *(undefined4 *)(param_2 + 0x94),*(undefined4 *)(param_2 + 0x90),
                   *(undefined4 *)(param_2 + 0x98));
  uVar3 = *(uint *)(param_2 + 0xc4);
  if ((uVar3 & 4) == 0) {
    if ((uVar3 & 2) == 0) {
      FUN_ram_4819a582(param_1,"SSR: bus_width=%lu\n",
                       (-(uint)((*(uint *)(param_2 + 0xb0) & 3) == 0) & 0xfffffffd) + 4);
    }
  }
  else {
    FUN_ram_4819a582(param_1,"EXT CSD: bus_width=%lu\n",1 << (uVar3 >> 6 & 3));
  }
  if (bVar1) {
    FUN_ram_4819a582(param_1,"SCR: sd_spec=%d, bus_width=%d\n",*(uint *)(param_2 + 0xa4) & 0xf,
                     *(uint *)(param_2 + 0xa4) >> 5 & 0xf);
    return;
  }
  return;
}


