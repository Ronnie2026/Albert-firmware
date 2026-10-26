/* Firmware entry: 0x481661ac */

undefined4 FUN_ram_481661ac(int *param_1,int *param_2)

{
  int *piVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"temperature_sensor","E (%lu) %s: %s(%d): Invalid argument\n",uVar3,
                     "temperature_sensor","temperature_sensor_install",0x87);
    return 0x102;
  }
  if (DAT_ram_4ff6e280 != (void *)0x0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"temperature_sensor","E (%lu) %s: %s(%d): Already installed\n",uVar3,
                     "temperature_sensor","temperature_sensor_install",0x88);
    return 0x103;
  }
  piVar1 = (int *)FUN_ram_4ff2091a(1,0x18,0x1000);
  if (piVar1 == (int *)0x0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"temperature_sensor","E (%lu) %s: %s(%d): no mem for temp sensor\n",uVar3,
                     "temperature_sensor","temperature_sensor_install",0x8b);
    return 0x101;
  }
  iVar6 = 0x17;
  if (piVar1[2] != 0) {
    iVar6 = param_1[2];
  }
  piVar1[2] = iVar6;
  FUN_ram_481a60be(0,1);
  FUN_ram_4ff337ae();
  pvVar2 = (void *)FUN_ram_4ff206d8(100,0x1000);
  DAT_ram_4ff6e280 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"temperature_sensor",
                     "E (%lu) %s: %s(%d): No space for s_tsens_attribute_copy\n",uVar3,
                     "temperature_sensor","temperature_sensor_attribute_table_sort",0x37);
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"temperature_sensor","E (%lu) %s: %s(%d): Table sort failed\n",uVar3,
                     "temperature_sensor","temperature_sensor_install",0xab);
    uVar3 = 0x101;
  }
  else {
    FUN_ram_4ff45158(pvVar2,&DAT_ram_4ff586fc,100);
    qsort(pvVar2,5,0x14,FUN_ram_4816607a);
    pvVar2 = DAT_ram_4ff6e280;
    do {
      if ((*(int *)((int)pvVar2 + 8) <= *param_1) && (param_1[1] <= *(int *)((int)pvVar2 + 0xc))) {
        iVar4 = *(int *)((int)pvVar2 + 4);
        iVar6 = 0;
        *piVar1 = (int)pvVar2;
        piVar7 = &DAT_ram_4ff58700;
        goto LAB_ram_48166422;
      }
      pvVar2 = (void *)((int)pvVar2 + 0x14);
    } while ((void *)((int)DAT_ram_4ff6e280 + 100) != pvVar2);
    iVar6 = *piVar1;
joined_r0x481664a2:
    if (iVar6 != 0) goto LAB_ram_48166262;
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"temperature_sensor","E (%lu) %s: %s(%d): Out of testing range\n",uVar3,
                     "temperature_sensor","temperature_sensor_choose_best_range",0x52);
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"temperature_sensor","E (%lu) %s: %s(%d): Cannot select the correct range\n",
                     uVar3,"temperature_sensor","temperature_sensor_install",0xac);
    uVar3 = 0x102;
  }
  FUN_ram_4816608a(piVar1);
  return uVar3;
  while (iVar6 = iVar6 + 1, iVar6 != 5) {
LAB_ram_48166422:
    iVar5 = *piVar7;
    piVar7 = piVar7 + 5;
    if (iVar5 == iVar4) {
      FUN_ram_481a5e6c();
      iVar6 = *piVar1;
      goto joined_r0x481664a2;
    }
  }
LAB_ram_48166262:
  uVar3 = FUN_ram_4ff44d14();
  iVar6 = *piVar1;
  FUN_ram_4ff44bf0(3,"temperature_sensor",&DAT_ram_481dceec,uVar3,"temperature_sensor",
                   *(undefined4 *)(iVar6 + 8),*(undefined4 *)(iVar6 + 0xc),
                   *(undefined4 *)(iVar6 + 0x10));
  FUN_ram_4ff31fb8(0x69,0,6,3,0,*(undefined1 *)(*piVar1 + 4));
  piVar1[1] = 0;
  *param_2 = (int)piVar1;
  return 0;
}


