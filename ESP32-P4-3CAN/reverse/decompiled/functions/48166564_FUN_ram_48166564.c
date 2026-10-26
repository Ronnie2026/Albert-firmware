/* Firmware entry: 0x48166564 */

/* WARNING: Removing unreachable block (ram,0x48166710) */
/* WARNING: Removing unreachable block (ram,0x48166720) */
/* WARNING: Removing unreachable block (ram,0x4816671a) */

undefined4 FUN_ram_48166564(int *param_1,float *param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char acStack_31 [21];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"temperature_sensor","E (%lu) %s: %s(%d): Has not been installed\n",uVar3,
                     "temperature_sensor","temperature_sensor_get_celsius",0x130);
  }
  else {
    if (param_2 != (float *)0x0) {
      if (param_1[1] == 1) {
        uVar2 = FUN_ram_4ff3351a(acStack_31);
        uVar3 = DAT_ram_4ff47f88;
        uVar7 = __floatsidf(uVar2);
        uVar8 = __extendsfdf2(uVar3);
        uVar8 = __divdf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_ram_481f4d80,
                         DAT_ram_481f4d84);
        __subdf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,
                 (int)((ulonglong)uVar8 >> 0x20));
        fVar6 = (float)FUN_ram_48195c96();
        fVar1 = DAT_ram_48222d3c;
        *param_2 = fVar6;
        if ((fVar6 < fVar1) || (DAT_ram_48222d40 < fVar6)) {
          uVar3 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"temperature_sensor",
                           "E (%lu) %s: Exceeding temperature measure range.\n",uVar3,
                           "temperature_sensor");
          uVar3 = 0xffffffff;
        }
        else {
          if (acStack_31[0] != '\0') {
            iVar4 = FUN_ram_4ff31f12(0x69,0,6,3,0);
            iVar5 = DAT_ram_4ff6e280;
            do {
              if (iVar4 == *(int *)(iVar5 + 4)) {
                *param_1 = iVar5;
                break;
              }
              iVar5 = iVar5 + 0x14;
            } while (DAT_ram_4ff6e280 + 100 != iVar5);
          }
          uVar3 = 0;
        }
      }
      else {
        uVar3 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"temperature_sensor","E (%lu) %s: %s(%d): tsens not enabled yet\n",uVar3,
                         "temperature_sensor","temperature_sensor_get_celsius",0x132);
        uVar3 = 0x103;
      }
      return uVar3;
    }
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"temperature_sensor","E (%lu) %s: %s(%d): Celsius points to nothing\n",uVar3,
                     "temperature_sensor","temperature_sensor_get_celsius",0x131);
  }
  return 0x102;
}


